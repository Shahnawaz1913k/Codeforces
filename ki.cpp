#include<iostream> 
using namespace std; 

void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum) 
{ 
   int rem_bt[n]; 
    for (int i = 0 ; i < n ; i++)   rem_bt[i] =  bt[i]; 
  
    int t = 0; 
   while (1) 
    { 
        bool done = true; 
        for (int i = 0 ; i < n; i++) 
        { 
           if (rem_bt[i] > 0) 
            { 
                done = false;
                if (rem_bt[i] > quantum) 
                {  t += quantum; 
   					 rem_bt[i] -= quantum; 
                } 
  
               else
                { 
                    t = t + rem_bt[i]; 
  					  wt[i] = t - bt[i]; 
  					  rem_bt[i] = 0; 
                } 
            } 
        } 
  
        if (done == true)   break; 
    } 
} 
void findavgTime(int processes[], int n, int bt[], int quantum) 
{ 
    int wt[n], tat[n], total_wt = 0, total_tat = 0; 
    findWaitingTime(processes, n, bt, wt, quantum); 
    
    for (int i=0; i<n; i++) total_wt = total_wt + wt[i]; 
  
    cout << "Average waiting time = " << (float)total_wt / (float)n; 
} 
int main() 
{ 
    int processes[] = { 1, 2, 3}; 
    int n = sizeof processes / sizeof processes[0]; 
 	 int burst_time[] = {10, 5, 8};  
    int quantum = 2; 
    findavgTime(processes, n, burst_time, quantum); 
    return 0; 
} 