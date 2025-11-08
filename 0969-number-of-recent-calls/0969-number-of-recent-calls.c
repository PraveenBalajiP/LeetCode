typedef struct {
    int front;
    int rear;
    int *arr;
    
} RecentCounter;


RecentCounter* recentCounterCreate() {
    RecentCounter* obj=(RecentCounter*)malloc(sizeof(RecentCounter));
    obj->front=-1;
    obj->rear=-1;
    obj->arr=(int*)malloc(sizeof(int)*10000);
    return obj;
}

int recentCounterPing(RecentCounter* obj, int t) {
    if(obj->front==-1)
    {
        obj->front=obj->rear=0;
        obj->arr[obj->rear]=t;
        return 1;
    }
    else
    {
        obj->arr[++obj->rear]=t;
        int range=t-3000;
        int pointer=obj->front;
        while(pointer<=obj->rear)
        {
            if(obj->arr[obj->front]<range)
                obj->front++;
            pointer++;
        }
        return obj->rear-obj->front+1;
    }
}

void recentCounterFree(RecentCounter* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);
*/