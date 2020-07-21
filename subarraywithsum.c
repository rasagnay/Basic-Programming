// PROBLEM //
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

// CODE //

int main() {
	//code
	int T,N,S;
	scanf("%d\n",&T);
	while(T--){
	scanf("%d%d\n",&N,&S);
	int arr[N];
	for(int i=0;i<N;i++){
	    scanf("%d",&arr[i]);
	}
	int j=0,sum=0,i=0,cnt=0;
	    while(j<N){
	        sum+=arr[j];
	        if(sum<=S){
	            j+=1;
	            if(sum==S){
	            printf("%d %d\n",i+1,j);
	            cnt=1;
	            break;
	            }  
	       }
	       else{
	       j=i+1;
	       i+=1;
	       sum=0;
	           
	       
	    }
	}
	if(cnt==0)
	printf("%d\n",-1);
	
	}
	
	return 0;
}
