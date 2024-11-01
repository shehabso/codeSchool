fn main(){
    let x :i32 =5;
    {
        let x =12;
        assert_eq!(x,12);
        println!("{}",x);

    }
    assert_eq!(x,5);
    println!("{}",x);

    let x=42;
    println!("{}",x);
}