class Solution
{
    long substrCount (String S, int K) {
        // your code 
        
        return helper(S,K)-helper(S,K-1);
        
    }
    
    
    public static long helper(String S,int k){
        
        int[] arr=new int[26];
        
        long ans=0;
        
        int diff=0;
        
        int p=0;
        
        
        
        for(int i=0;i<S.length();i++){
            char ch=S.charAt(i);
            arr[ch-'a']++;
            
            
            if(arr[ch-'a']==1){
                diff++;                          
                
                  }
            
            if(diff<=k){
                // ans++;
                // ans+=i-p;
            }
            else{
                
                while(diff>k){
                    char ch1= S.charAt(p);
                    
                    arr[ch1-'a']--;
                    p++;
                    if(arr[ch1-'a']==0){
                        
                        
                        diff--;
                    }
                    
                    if(diff<=k){
                        
                        // ans++;/
                        // ans+=i-p;
                    }
                    
                    
                    
                }
                
                
                
            }
            
            
            ans+=i-p+1;
            
            
        }
        
        return ans;

    }
}
            
            
           
