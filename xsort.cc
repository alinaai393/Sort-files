#include <iostream>

 using namespace std;

void XSort(int list[], int n)

{
  int min, tmp, i, j, min_j;
  


  for (i = 0; i < n - 1; i++) {
    


	INST_R(list[i]);
   
   
     min = list[i]; 
    
       min_j = i;
    
    for (j = i + 1; j < n; j++) {
	
    
      INST_R(list[j]);
      
         if (list[j] < min) {
       
	INST_R(list[j]);
        
        
          min = list[j]; 
       
           min_j = j;
      }
    }
    
	INST_R(list[min_j]);
   
   
   
      tmp = list[min_j]; 
	
       INST_R(list[i]);
   
   
      list[min_j] = list[i];
	
    
     INST_W(list[min_j]);
   
   
      list[i] = tmp;
	
    
     INST_W(list[i]);
  }
}
