#include <iostream>
#include <cstring>
#include <cctype>
//problem description
//if this algorithm for encryption method
//example: original data = hAc13rr4nk, encrypted data = 431Ah*c00rr0nk
// write the algorithm of decryption 
//Given string s, let s[i] represent the ith character in the string s, using 0 - based indexing.

//1. Initially i = 0.

//2. If s[i] is lowercase and the next character s[i + 1] is uppercase, swap them, add * after them, and move to i+2.

//3. If s[i] is a number, replace it with 0, place the original number at the start, and move to i + 1.

//4. Else, move to i + 1.

//5. Stop if i is more than or equal to the string length.Otherwise, go to step 2.

// Helper function to swap characters
void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
// Helper function to remove a character from the string by shifting
void removeChar(char* s, int index) {
    int n = strlen(s);
    for (int i = index; i < n - 1; i++) {
        s[i] = s[i + 1];
    }
    s[n - 1] = '\0'; // Null-terminate the modified string
}
// The decryption function
char* decryptPassword(char* s) {
    int length = strlen(s);
    char* nums = new char[length+1]; // +1 for null-terminator

    int numIndex = 0;
    std::cout << s << std::endl;
    // Extract numbers and replace them with '0'
    for (int i = 0; i < length; i++) {
        if (s[i] >= '1' && s[i] <= '9') {
            nums[numIndex] = s[i];
            numIndex++;
            removeChar(s, i);
           i--;
           length--;
          
        }
    }
   
    //// Place the numbers back where the '0's were
    for (int i = 0, numPos = numIndex-1; i < length; i++) {
        if (s[i] == '0') {
            s[i] = nums[numPos--];
        
        }

    }

    // Reverse Swap characters  
    for (int i = 0; i < length; i++) {
        if (isupper(s[i]) && islower(s[i + 1])) {
            swap(&s[i], &s[i + 1]);
        }
    }
    //remove '*'
    for (int i = 0; i < length; i++) {
        if (s[i] == '*') {
            removeChar(s, i); // Remove '*'
            i--;
            length--;
   
        }
    }
    

    delete [] nums; // Deallocate the memory
    return s;
}

int main() {
    char encryptedPassword[] = "431Ah*c00rr0nk";
    std::cout << "Decrypted password: " << decryptPassword(encryptedPassword) << std::endl;
    
   
   
    return 0;
}
