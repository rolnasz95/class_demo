#include <iostream>
#include <string>

class Invoice
{
private:
	std::string partNum;
	std::string partDesc;
	int quantity;
	int price;
public:
	Invoice(std::string partNum, std::string partDesc, int quantity, int price)
	{
		this->partNum = partNum;
		this->partDesc = partDesc;
		this->quantity = quantity;
		this->price = price;
	}

	// Accessor methods
	std::string getPartNum() const { return this->partNum; };
	std::string getPartDesc() const { return this->partDesc; };
	int getQuantity() const { return this->quantity; };
	int getPrice() const { return this->price; };

	// Mutator methods
	void setPartNum(std::string partNum) { this->partNum = partNum; };
	void setPartDesc(std::string partDesc) { this->partDesc = partDesc; };
	void setQuantity(int quantity) { this->quantity = quantity; };
	void setPrice(int price) { this->price = price; };

	// Return quantity * price
	int getInvoiceAmount() { return this->quantity * this->price; };
};

int main()
{
	// Create new Invoice object with sample values
	Invoice testInvoice("12345", "Hammer", 100, 5);

	// Print first example to console using getter methods
	std::cout << "Part number: " << testInvoice.getPartNum() << '\n';
	std::cout << "Part description: " << testInvoice.getPartDesc() << '\n';
	std::cout << "Quantity: " << testInvoice.getQuantity() << '\n';
	std::cout << "Price per item: $" << testInvoice.getPrice() << '\n';
	std::cout << "Invoice amount: $" << testInvoice.getInvoiceAmount() << '\n';

	// Set quantity to negative value to trigger if statement
	testInvoice.setQuantity(-1);

	if (testInvoice.getQuantity() < 0)
	{
		std::cout << "\nQuantity cannot be negative. Quantity set to 0.\n";
		testInvoice.setQuantity(0);
		std::cout << "\nInvoice data members modified.\n";
	}

	// Modify object with setter methods
	testInvoice.setPartNum("123456");
	testInvoice.setPartDesc("Saw");
	testInvoice.setQuantity(0);
	testInvoice.setPrice(10);

	// Print second example to console using getter methods
	std::cout << "\nPart number: " << testInvoice.getPartNum() << '\n';
	std::cout << "Part description: " << testInvoice.getPartDesc() << '\n';
	std::cout << "Quantity: " << testInvoice.getQuantity() << '\n';
	std::cout << "Price per item: $" << testInvoice.getPrice() << '\n';
	std::cout << "Invoice amount: $" << testInvoice.getInvoiceAmount() << '\n';

	return 0;
}