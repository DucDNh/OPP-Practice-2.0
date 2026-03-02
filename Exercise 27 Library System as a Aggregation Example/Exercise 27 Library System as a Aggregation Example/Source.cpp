#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book {
	string title;
public :
	Book(string Title) : title(Title) { }
	string book_title() const {
		return title;
	}
};

class Library {
	vector<Book*> book_collection;
public :
	void add_book(Book* book) {
		book_collection.push_back(book);
	}
	void list_book() {
		cout << "Library Book Catalog :" << endl;
		for (Book* book : book_collection)
			cout << "Book Title : " << book->book_title() << endl;
	}
};

int main() {
	Book book1("Chiramune");
	Book book2("Rabudame");
	Library library1;
	library1.add_book(&book1);
	library1.add_book(&book2);
	library1.list_book();
	return 0;
}