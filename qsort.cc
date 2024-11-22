#include <iostream>
   
   
   
   using namespace std;




int Partition(int list[], int lo, int hi);


void QSort(int list[], int lo, int hi)
{
 
 
  int k;
  if (lo < hi) {
    
  
  
    k = Partition(list, lo, hi);
    
    QSort(list, lo, k - 1); 
    
        QSort(list, k + 1, hi); 
  }
}


int Partition(int list[], int lo, int hi)
{
  int x, tmp;

  INST_R(list[(lo + hi) / 2]);
  x = list[(lo + hi) / 2];
  
  while (lo < hi) 
  {
   
    if (lo < hi)
    {
      INST_R(list[hi]); 
    }    
    while ( (lo < hi) && (x < list[hi]) ) 
    {
      hi--;	
      if (lo >= hi)
      {
        break;
      }
      else
      {
        INST_R(list[hi]);
        
      }
    }
   
	if (lo < hi){
		INST_R(list[lo]);
	}
    
    while ( (lo < hi) && (x > list[lo]) ) 
    {
      lo++;
	
    
    if (lo >= hi){
		
          break;
	
        } else {
		
            INST_R(list[lo]);
	}
    }
    
	
    INST_R(list[hi]);
	
    tmp = list[lo];
	 
    list[lo] = list[hi];
    
      INST_W(list[lo]); 
    
    list[hi] = tmp;
   
        INST_W(list[hi]);
  }
  
     return lo;

}
