fn main(){
    let mut x:i32=10;
    let  mut y:i32=5;
    {

        println!("the value of x is {} and variable of y is {}",x,y);
    }
    x=6;
    y=2;
    println!("the value of x is {} and variable of y is {}",x,y);
}