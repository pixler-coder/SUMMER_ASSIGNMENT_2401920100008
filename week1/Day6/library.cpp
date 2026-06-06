#include <iostream>
#include <string>

// 1. The Interface: LibraryUser
class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
    virtual ~LibraryUser() = default; 
};

// 2. The KidUser Class
class KidUser : public LibraryUser {
private:
    int age;
    std::string bookType;

public:
    void setAge(int a) {
        age = a;
    }

    void setBookType(std::string b) {
        bookType = b;
    }

    void registerAccount() override {
        if (age < 12) {
            std::cout << "You have successfully registered under a Kids Account\n";
        } else if (age > 12) {
            std::cout << "Sorry, Age must be less than 12 to register as a kid\n";
        }
    }

    void requestBook() override {
        if (bookType == "Kids") {
            std::cout << "Book Issued successfully, please return the book within 10 days\n";
        } else {
            std::cout << "Oops, you are allowed to take only kids books\n";
        }
    }
};

// 3. The AdultUser Class
class AdultUser : public LibraryUser {
private:
    int age;
    std::string bookType;

public:
    void setAge(int a) {
        age = a;
    }

    void setBookType(std::string b) {
        bookType = b;
    }

    void registerAccount() override {
        if (age > 12) {
            std::cout << "You have successfully registered under an Adult Account\n";
        } else if (age < 12) {
            std::cout << "Sorry, Age must be greater than 12 to register as an adult\n";
        }
    }

    void requestBook() override {
        if (bookType == "Fiction") {
            std::cout << "Book Issued successfully, please return the book within 7 days\n";
        } else {
            std::cout << "Oops, you are allowed to take only adult Fiction books\n";
        }
    }
};

// 4. The Main Function
int main() {
    std::cout << "---------- TEST CASE #1: KidUser ----------\n";
    KidUser kidUser;
    
    // Testing Age limits
    std::cout << "Testing Age = 10:\n";
    kidUser.setAge(10);
    kidUser.registerAccount();
    
    std::cout << "\nTesting Age = 18:\n";
    kidUser.setAge(18);
    kidUser.registerAccount();
    
    // Testing Book Types
    std::cout << "\nTesting BookType = 'Kids':\n";
    kidUser.setBookType("Kids");
    kidUser.requestBook();
    
    std::cout << "\nTesting BookType = 'Fiction':\n";
    kidUser.setBookType("Fiction");
    kidUser.requestBook();

    std::cout << "\n---------- TEST CASE #2: AdultUser --------\n";
    AdultUser adultUser;
    
    // Testing Age limits
    std::cout << "Testing Age = 5:\n";
    adultUser.setAge(5);
    adultUser.registerAccount();
    
    std::cout << "\nTesting Age = 23:\n";
    adultUser.setAge(23);
    adultUser.registerAccount();
    
    // Testing Book Types
    std::cout << "\nTesting BookType = 'Kids':\n";
    adultUser.setBookType("Kids");
    adultUser.requestBook();
    
    std::cout << "\nTesting BookType = 'Fiction':\n";
    adultUser.setBookType("Fiction");
    adultUser.requestBook();

    return 0;
}