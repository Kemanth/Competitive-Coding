int Solution::titleToNumber(string A) {
    
    int length=A.length();
    int str[length];
    
    for(int i = 0; i<length; i++)
    {
       char ch=A[i];
    
        switch(ch)
        {
            case 'A':
            str[i]=1;
            break;
            
            case 'B':
            str[i]=2;
            break;
            
            case 'C':
            str[i]=3;
            break;
            
            case 'D':
            str[i]=4;
            break;
            
            case 'E':
            str[i]=5;
            break;
            
            case 'F':
            str[i]=6;
            break;
            
            case 'G':
            str[i]=7;
            break;
            
            case 'H':
            str[i]=8;
            break;
            
            case 'I':
            str[i]=9;
            break;
            
            case 'J':
            str[i]=10;
            break;
            
            case 'K':
            str[i]=11;
            break;
            
            case 'L':
            str[i]=12;
            break;
            
            case 'M':
            str[i]=13;
            break;
            
            case 'N':
            str[i]=14;
            break;
            
            case 'O':
            str[i]=15;
            break;
            
            case 'P':
            str[i]=16;
            break;
            
            case 'Q':
            str[i]=17;
            break;
            
            case 'R':
            str[i]=18;
            break;
            
            case 'S':
            str[i]=19;
            break;
            
            case 'T':
            str[i]=20;
            break;
            
            case 'U':
            str[i]=21;
            break;
            
            case 'V':
            str[i]=22;
            break;
            
            case 'W':
            str[i]=23;
            break;
            
            case 'X':
            str[i]=24;
            break;
            
            case 'Y':
            str[i]=25;
            break;
            
            case 'Z':
            str[i]=26;
            break;
            
        }
        
    }
    int value = str[0];
    
    for(int i=1; i<length; i++)
    {
        
         value = 26*value + str[i];
        
    }
    
    return value;
}

