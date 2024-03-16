#ifndef LIBRARIAN_H
#define LIBRARIAN_H

/**
 * admin
 */
class Librarian : Catalog {

private:
	Enum status;
	string fullName;
	List<Book> books;
	List<Employee> employees;

public:
	void fireEmployee(List<Employee>* employees);

	void addBook(List<Book>* books);

	void addEmployee(List<Employee> employees);

	Librarian();
};

#endif
