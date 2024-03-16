#ifndef ISSUANCEHISTORY_H
#define ISSUANCEHISTORY_H

/**
 * class that reporting about all book's issuances
 */
class IssuanceHistory : Issuance {

private:
	List<Issuance> issuances;
	int idBook;
	Enum status;
	Book book;

public:
	List<issuance> addIssuance(Book* bookObj);

	IssuanceHistory();
};

#endif
