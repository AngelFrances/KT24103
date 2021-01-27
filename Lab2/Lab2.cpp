#include <iostream>
using namespace std;

struct Node {
	int num;
	string itemName;
	double price;
	Node* next;
	
	public:
		Node () {};
		void set_Num (int Num){num = Num;};
		void set_name (string iname) {itemName = iname;};
		void set_Price (double iprice) {price = iprice;};
		void set_Next (Node *inext) {next = inext;};
		
		int getNum() {return num;};
    	string getIname() {return itemName;};
    	double getPrice() {return price;};
    	Node *getNext() {return next;};
		
       };


struct List {
	Node *head;
	double total = 0.00;
	
	public:
		List() { head = NULL; };
		void addNode (int num, string iname, double price);
    	double totalPrice() {return total;};
        void print();
	
};


void List::addNode(int num, string iname, double price)
{
    total += price;
    Node *newNode = new Node();
    newNode->set_Num(num);
    newNode->set_name(iname);
    newNode->set_Price(price);
    newNode->set_Next(NULL);
	
	
	 Node *temp = head;
    if(temp != NULL)
    {
        while(temp->getNext() != NULL)
            temp = temp->getNext();

        
        temp->set_Next(newNode);
	}
	else{
	
		head = newNode;
	}
}

void List::print(){
	Node *temp = head;
	while (temp){
	    cout << temp->getNum() << " ";
        cout << temp->getIname();
        cout << "\t" << temp->getPrice()<< endl;
        temp = temp->getNext();
	}
}

int main(){
	List pos;
	pos.addNode(10,"Pagoda Gnut 110g \t", 3.49);
	pos.addNode(11,"Hup Seng Cream Cracker ", 4.19);
	pos.addNode(12,"Yit Poh 2n1 Kopi-O \t", 7.28);
	pos.addNode(13,"Zoelife SN & Seed \t", 5.24);
	pos.addNode(14,"Gatsby S/FO Wet&Hard ", 16.99);
	pos.addNode(15,"GB W/G U/Hold 150g \t", 6.49);
	
	cout << "=====================================" << endl;
    cout << "BC Items \t\t\t" << "Price" << endl;
    cout << "=====================================" << endl;
    pos.print();
    cout << "=====================================" << endl;
    cout << "Total (GST Incl.)\t\t" << pos.totalPrice() << endl;
    cout << "=====================================" << endl;

    return 0;
}





