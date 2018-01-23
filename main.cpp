#include <iostream>

bool isPalindrome(std::string a){
// Function returns false if the input string is not a Palindrome, or true if it is.

    unsigned int size  = a.length(); 		//Variable to store the string's length
    for(int i = 0; i < (size / 2); i++){	//For loop iterates over the first half of the string using the size.
        if (a[i] != a[size - i - 1])
		return false;			//Successively compares the first index to the last index until the middle of the string is reached
						//Returns false if one of the indexes in the first half is not equal to the corresponding index in the second half
    }
    return true;
}

int main(){

    string test;
    std::getline(std::cin,test);
    
    if (isPalindrome(test))
        std::cout << "Your word is a Palindrome" << std::endl;
    else
        std::cout << "Your word is not a Palindrome" << std::endl;

    return 0;
}
