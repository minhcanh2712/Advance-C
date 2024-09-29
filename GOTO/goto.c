#include<stdio.h>
#include<setjmp.h>
#include<string.h>

char error_message[146];
 
jmp_buf buf;
int exception_code;


 // Dinh nghia cac macro TRY CATCH THROW
#define TRY if ((exception_code = setjmp(buf)) == 0) 
#define CATCH(value) else if (exception_code == (value)) 
#define THROW(value,error) strcpy(error_message, error) , longjmp(buf, (value)) 

 enum ErrorCodes { NO_ERROR, FILE_ERROR, NETWORK_ERROR, CALCULATION_ERROR };

 // Ham doc file
 void readFile() {
    printf("Doc file...\n");
    THROW(FILE_ERROR, "Loi doc file: File khong ton tai.");
}

// Ham xu ly mang
void networkOperation() {
    printf("Xu ly mang...\n");
    THROW(NETWORK_ERROR, "Loi xu ly mang: Khong the ket noi mang.");
}

// Ham tinh toan du lieu
void calculateData() {
   printf("Tinh toan du lieu...\n");
   THROW(CALCULATION_ERROR, "Loi tinh toan du lieu: Du lieu khong hop le.");
}

int main(){
    TRY{
        readFile();
        networkOperation();
        calculateData();
    } CATCH(FILE_ERROR) {
        printf("%s\n", error_message);
        }
    TRY{
        networkOperation(); 
    } 
    CATCH(NETWORK_ERROR) {
        printf("Error: %s\n", error_message);
    }

    TRY{
        calculateData();    
    } 
    CATCH(CALCULATION_ERROR) {
        printf("Error: %s\n", error_message);
    }

    printf("Ket thuc chuong trinh.\n");

    return 0;
}  


