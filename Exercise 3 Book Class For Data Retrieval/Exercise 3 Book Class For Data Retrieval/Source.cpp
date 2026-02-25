#include <iostream>

using namespace std;

class Book {
	string title;
	string author;
	string isbn;
public :
	Book(string Title, string Author, string Isbn) {
		title = Title;
		author = Author;
		isbn = Isbn;
	}
	void get_details() {
		cout << "Title: " << title << " | Author : " << author << " | ISBN : " << isbn << endl;
	}
};

int main() {
	Book book1 = Book("How to C++", "DucDNh", "2020");
	book1.get_details();
	return 0;
}