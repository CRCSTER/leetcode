vodi creat_heap(){
    int i = 0;
    int j = k / 2;
    for(i = j; i >= 1; i--){
	roate(i);
}

void route(int i){
    int left = 2 * i;
    int right = 2 * i + 1;
    if(left > k)
        return;
    int pos;
    if(right > k)
	pos = left;
    else
	pos = arr[left] > arr[right] ? right : left;
    if(arr[i] > arr[pos]){
	swap(arr[i], arr[pos]);
        route[pos];
    }
}	
