#ifndef BOOK_H
#define BOOK_H

/**
 * class describes all actions that may be performed on instance of book
 */
class Book {

protected:
	/**
	 * no possessing = 0
	 */
	int idBook;
private:
	string author;
	string titile;
	string pubishing;
protected:
	Enum status;
private:
	List<string> comments;
	/**
	 * class describes all actions that may be performed on instance of book
	 */
	List<string> description;

public:
	Book();

	Enum* getStatus();

	void string_getInfo();

	List<string> getDescription();

	string* getAuthor();

	string* getTitle();

	string* getPublishing();

	List<string> getComments();

	void checkIssuanceHistory();
};

#endif
