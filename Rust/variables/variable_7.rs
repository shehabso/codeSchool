
fn main(){
    let (mut x,mut y)=(1,2);
    x+=2;
    y+=2;
    assert_eq!(x,3);
    assert_eq!(y,4);
    println!("{} , {}" ,x  , y);
}
