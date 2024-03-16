#ifndef SCHEDULER_H
#define SCHEDULER_H

/**
 * ñhecks whether there's a need in fining employee
 */
class Scheduler {

protected:
	Book book;
private:
	Date dateInit;
	Enum status;
	Date dateEnd;
	int id;
	int rate;
protected:
	List<Employee> employees;

public:
	void fineEmployee(Date* dateInit, Date* dateEnd, List<Employee>* employees);
};

#endif
