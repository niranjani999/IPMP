#include <bits/stdc++.h>
using namespace std; 
#define DELIM '\n' 
void print(char *str, int n) 
{ 
    if (n <= 0) 
    return; 
    size_t cnt = 0;
    char *target = NULL; 
    target = strrchr(str, DELIM); 
    if (target == NULL) 
    { 
        cout << "ERROR"; 
        return; 
    } 
    while (cnt < n) 
    { 
        while (str < target && *target != DELIM) --target; 
        if (*target == DELIM) --target, ++cnt; 
        else break; 
    } 
    if (str < target) target += 2; 
    cout << target << endl; 
} 
int main(void) 
{ 
    char *str1 ="Line 1\nLine 2\nLine 3\nLine 4\nLine 5\nLine 6\nLine 7\nLine 8\nLine 9\nLine 10\nLine 11\nLine 12\nLine 13\nLine 14\nLine 15\nLine 16\nLine 17\nLine 18\nLine 19\nLine 20";  
    print(str1, 10); 
    cout << "-----------------\n"; 
    return 0; 
} 
