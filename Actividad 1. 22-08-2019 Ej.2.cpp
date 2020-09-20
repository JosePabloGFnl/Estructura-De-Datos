#include <stdio.h>

void merge(int [], int, int [], int, int []);

int main() 
{
    int a[100], b[100], n, m, k, c[200];
    
    printf("Input number of elements in first array\n");
    scanf("%d", &n);
    
    printf("Input %d integers\n", n);
    for (k = 0; k < n; k++) {    
    scanf("%d", &a[k]);       
    }
    
    printf("Input number of elements in second array\n");
    scanf("%d", &m);
    
    printf("Input %d integers\n", m);
    for (k = 0; k < m; k++) {    
    scanf("%d", &b[k]);    
    }
    
    merge(a, n, b, m, c);
    
    printf("Sorted array:\n");
    
    for (k = 0; k < n + m; k++) {    
    printf("%d\n", c[k]);    
    }    
    return 0;
}

void merge(int a[], int n, int b[], int m, int c[]) {
    int i, j, d;    
    j = d = 0;
    
    for (i = 0; i < n + m;) {
        if (j < n && d < m) {
        
            if (a[j] < b[d]) {            
                c[i] = a[j];
                j++; 
            }
            else {            
                c[i] = b[d];
                d++; 
            }
            i++;
        }
        
        else if (j == n) {
            for (; i < n + m;) {            
                c[i] = b[d];
                d++;
                i++; 
            }
        }
        
        else {
            for (; i < n + m;) {                
                c[i] = a[j];
                j++;
                i++;
            }
        }
    }
}
