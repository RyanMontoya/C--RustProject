fn main() {
    println!("Hello, world!");

    function_2(); 
    function_3();  
    const NUM_BASE: i64 = 5012; 
    const NUM_MULT: i64 = 10123;
    let result: i64 = function_pass(NUM_BASE,NUM_MULT); 
    pointer_fn(result);
    println!("power result = {}",result);
}




fn function_2() {
    println!("Another function.");
} 



fn function_3() {  
    println!("beans");
}  

fn function_pass(a: i64, b: i64) -> i64 {  
let c = a*b;
 return c;
} 

fn pointer_fn( a: i64) {  
    let ptr = &a;
println!("{}", ptr);
}

