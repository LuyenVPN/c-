#include<stdio.h>
#include<string.h>
#include<ctype.h>

void chuanHoa(char* str) {
    int n = strlen(str);
    char result[81] = "";  
    int idx = 0;           
    int capitalize = 1;    

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
          
            if (capitalize) {
                result[idx++] = toupper(str[i]);
                capitalize = 0;
            } else {
                result[idx++] = tolower(str[i]);
            }
        } else {
           
            if (idx > 0 && result[idx - 1] != ' ') {
                result[idx++] = ' ';  
            }
            capitalize = 1;  
        }
    }

    
    if (idx > 0 && result[idx - 1] == ' ') {
        result[idx - 1] = '\0';
    } else {
        result[idx] = '\0';
    }

   
    strcpy(str, result);
}

int main() {
    int T;
    char name[81]; 

    
    printf("Nhap so bo test: ");
    scanf("%d", &T);
    getchar(); 

    for (int t = 0; t < T; t++) {
        
        printf("Nhap ho ten: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        chuanHoa(name);

        printf("Ho ten chuan hoa: %s\n", name);
    }

    return 0;
}
