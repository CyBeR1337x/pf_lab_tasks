#include <iostream>
using namespace std;

struct Book {
	char title[10];
	char author[10];
	int year_of_publication;
	float price;
};

Book read_book();
void oldBooks(Book[]);

void main() {
	Book books[500];
	for (int i = 0; i < 500; i++)
		books[i] = read_book();


	oldBooks(books);

	system("pause");
}

Book read_book() {
	Book x;
	cout << "Enter Book Title: ";
	cin >> x.title;
	cout << "Enter Author: ";
	cin >> x.author;
	cout << "Enter Year of publication: ";
	cin >> x.year_of_publication;
	cout << "Enter Price of book: ";
	cin >> x.price;

	return x;
}

void oldBooks(Book x[]) {
	Book old_books[500];
	int index = 0;
	for (int i = 0; i < 500; i++) {
		if (x[i].year_of_publication < 1990) {
			old_books[index] = x[i];
			index++;
		}
	}

	cout << "Data of books Published Before 1990: " << endl;
	for (int i = 0; i < index; i++) {
		cout << "Title: " << old_books[i].title << endl;
		cout << "Author: " << old_books[i].author << endl;
		cout << "Year of publication: " << old_books[i].year_of_publication << endl;
		cout << "Price: " << old_books[i].price << endl;
	}
}
