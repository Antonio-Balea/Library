#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string Book_Create()
{
	ofstream fout;
	ifstream fin;
	string book;
	cout << "What book do you want to get?: ";
	getline(cin, book);
	fout.open("Data\\Books\\" + book + ".in", ios::app);
	if (!fout.is_open())
		cout << "Error in opening the " << book << " with ofstream." << endl;
	fin.open("Data\\Books\\" + book + ".in");
	if (!fin.is_open())
		cout << "Error in opening the " << book << " with ifstream." << endl;
	fout << book;
	cout << "Book entered as data succesfully." << endl;
	fout.close();
	fin.close();
	return book;
}

float Book_Price(const string& bookName)
{
	ofstream fout;
	ifstream fin;
	fout.open("Data\\Prices\\" + bookName + ".in", ios::app);
	if (!fout.is_open())
		cout << "Error in opening the " << bookName << " with ofstream." << endl;
	fin.open("Data\\Prices\\" + bookName + ".in", ios::app);
	if (!fin.is_open())
		cout << "Error in opening the " << bookName << " with ifstream." << endl;
	float price;
	cout << "Getting price for book: " << bookName << endl;
	cout << "Please enter the desired price: ";
	cin >> price;
	fout << price;
	cout << "Price entered as data succesfully." << endl;
	return price;
}

int main()
{
	ofstream fout;
	ifstream fin;
	string book, price, author, stock, book_text, price_text, author_text, stock_text;	
	string bookName = Book_Create();
	float book_price = Book_Price(bookName);
}

