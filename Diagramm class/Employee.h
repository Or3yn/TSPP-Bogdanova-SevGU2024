#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * class can read max 1 instance of book.
 * class describes all employee's actions
 */
class Employee : Book, NewEmployee, Scheduler {

protected:
	string fullName;
	int id;
	int rate;
private:
	List<Employee> employees;
	int idBook;
public:
	Enum status;

	void addComment(List<string>* comments, Book* bookObject);

	void takeBook(List<Book> books);

	void giveBook(Book* book);

	Employee();

	Book& findBook(List<Book>* bookList);
};

#endif
