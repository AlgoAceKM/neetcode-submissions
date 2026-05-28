class Node{
    public:
int key , val;
Node* prev;
Node* next;
    Node(int k, int v) {
        key = k;
        val = v;
    }
};


class LRUCache {
public:
int cap;
unordered_map<int, Node*> mp;
Node* head;
Node* tail;


LRUCache(int capacity) {
        cap=capacity;

    head=new Node(-1,-1);
    tail=new Node(-1,-1);


       head->next=tail;
       tail->prev=head; 
    }
    
    void remove(Node* node) {

    Node* prevNode = node->prev;
    Node* nextNode = node->next;

    prevNode->next = nextNode;
    nextNode->prev = prevNode;
}

void insert(Node* node) {

    Node* nextNode = head->next;

    head->next = node;
    node->prev = head;

    node->next = nextNode;
    nextNode->prev = node;
}
    int get(int key) {
        if(mp.find(key) != mp.end()){
            Node* node = mp[key];
        remove(node);   
        insert(node);   

        return node->val;
        }return -1;
    }
    
   void put(int key, int value) {
    if(mp.find(key) != mp.end()) {

        Node* node = mp[key];

        node->val = value;

        remove(node);
        insert(node);
    }
    else {
        Node* node = new Node(key, value);
        mp[key] = node;
        insert(node);
        if(mp.size() > cap) {
            Node* lru = tail->prev;
            remove(lru);
            mp.erase(lru->key);
        }
    }
}
};
