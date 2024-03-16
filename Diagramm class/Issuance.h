#ifndef ISSUANCE_H
#define ISSUANCE_H

/**
 * data type, which represents, who has taken the book and when it was done
 */
class Issuance : Scheduler {

private:
	Book book;
	Date dateInit;
	Date dateEnd;
	List<Employee> employees;

public:
	Issuance();

	void lastBookCheck(List<Books> books);
};

#endif
