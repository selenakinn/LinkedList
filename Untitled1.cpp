#include<iostream>
#include<string>

using namespace std;

class Node
{
    public:
    string word;
    string mean;
    Node *next;
};

class LinkedList
{
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList() {
        head = NULL;

    }
    void insertTail(string word,string mean);
    void search(string word);
    void update(string word,string mean);
    void size();
    void display();
};


void LinkedList::insertTail(string word,string mean)
{
    Node* newNode = new Node();
    newNode->word = word;
    newNode->mean = mean;  
    
    if(head==NULL) 
    {
    	head=newNode;
	}
    
    else
	{
        Node* temp = head;
    
        while(temp->next!=NULL)
		{
	        temp = temp->next;
	    }
    
        temp->next= newNode;	
	}

}
 
 void LinkedList::search(string word)
 {
   	Node* temp=head;
   	    
	while(temp->word.compare(word) != 0)
	{
		temp=temp->next;
	}
	cout << temp->mean;
 }

 void LinkedList::update(string word,string mean)
 {
	Node* temp=head;

    while(temp != temp)
	{
        temp= temp->next;
    }
    temp->mean = mean;
    cout << "Value updated: " << temp->mean << endl;    
 }

 void LinkedList :: size(string word)
 {
    Node *temp=tail;
    while (temp!=NULL)
    {
        counter+=1;
        temp=temp->next;
    }
 }

void LinkedList::display()
{
    Node* node = head;

   while(node!=NULL)
   {
        cout << node->word << "-->" << node->mean << endl;
        node = node->next;
   }
   
}

int main()
{
   LinkedList* cat_names = new LinkedList();

   cat_names->insertTail("Arfie","A heap or cluster of people pressed closely together or piled on top of each other, as in celebration or assault.");
   cat_names->insertTail("Bean","a male given name: from Germanic words meaning  eagle and power");
   cat_names->insertTail("Charlotte","Charlotte is an antique name with a royal history");
   cat_names->insertTail("Dakota","From the Native American Dakota language, meaning friend or ally");
   cat_names->insertTail("Elwood","Elwood is a masculine name of British origin, meaning noble woods elder tree forest.");
   cat_names->insertTail("Flynn","a male given name: from Germanic words meaning eagle and power");
   cat_names->insertTail("Gigi","earth worker");
   cat_names->insertTail("Hugo","Mind, spirit");
   cat_names->insertTail("Iliana","Light, From Troy");
   
   
   cat_names->display();
   cat_names->search("Bean");
   cat_names->update("Dakota");
   cat_names->size();
   cat_names->display();
   
   //no matter how hard I tried I couldn't find the error and run the code

   return 0;
}
