class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int k=t.length();
        
        if(n!=k){
            return false;
        }
        int i=0;
        while(i<n){
            int flag=0;
            if(i>0){
                
                for(int r=i-1;r>=0;r--){
                    if(s[i]==s[r]){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==1){
                i++;
                continue;
            }
            int index;
            int check_t=0;
            while(check_t<n){
                if(s[i]==t[check_t]){
                    index=check_t;
                    break;
                }
                else if(check_t==n-1){
                    return false;
                }
                else{
                    check_t++;
                }
            }
            int counts=1,countt=1;
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    counts++;
                }
            }
            for(int m=index+1;m<n;m++){
                if(t[index]==t[m]){
                    countt++;
                }
            }
            if(counts!=countt){
                return false;
            }
            else{
                i++;
            }
           
        }
        return true;
    }
};
