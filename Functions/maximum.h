template <class T>

T maximum(T x,T y, T z){
    T maximumValue=x;
    if(y>maximumValue){
        maximumValue=y;
    }

    if(z>maximumValue){
        maximumValue=z;
    }

    return maximumValue;
}