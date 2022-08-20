int peak = 0;
        
        if(arr.size() < 3)  return false;
        
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i] == arr[i+1])  
                return false;
            else if(arr[i] < arr[i+1])
                peak = i+1;
            else
                break;
        }
        
        if(peak == 0 || peak == arr.size()-1)
            return false;
        
        for(int i = peak; i < arr.size() - 1; i++){
            if(arr[i] == arr[i+1] || arr[i] < arr[i+1])  
                return false;
        }
		
        return true;
    }