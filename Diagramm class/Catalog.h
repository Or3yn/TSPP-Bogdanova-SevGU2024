#ifndef CATALOG_H
#define CATALOG_H

class Catalog : Book {

private:
	List<Book> books;
	int idBook;
	Enum status;
};

#endif
