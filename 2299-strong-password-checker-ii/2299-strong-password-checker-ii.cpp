class Solution {
public:
    bool strongPasswordCheckerII(string password) {
		if(password.size() < 8) 
            return false;
			
        bool lower = 0, upper = 0;
        bool digit = 0, special = 0;
		
        for(int i=0; i<password.size(); i++){ 
            if(i>0 && password[i] == password[i-1]) 
				return false;
             
			if(password[i] >=65 && password[i] <=90)  upper = 1; 
			else if(password[i] >=97 && password[i] <=122)   lower = 1;   
			else if(password[i] >=48 && password[i] <=57)    digit = 1;
			else special = 1;
        }
        if(upper && lower && digit && special)
            return true;
        return false;
    }
};