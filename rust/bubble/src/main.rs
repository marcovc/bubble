
use rand::seq::SliceRandom;


const LST_SIZE: usize = 10000;
const NR_RUNS: u64 = 100;


fn bubble_sort(lst: &mut [u64; LST_SIZE]) {
    let mut swapped = true;
    while swapped {
        swapped = false;
        for i in 0..LST_SIZE - 1 {
            if lst[i] > lst[i+1] {
                lst.swap(i, i+1);
                swapped = true;
            } 
        }    
    }
}

fn is_sorted(lst: [u64; LST_SIZE]) -> bool {
    for i in 0..LST_SIZE - 1 {
        if lst[i] > lst[i+1] {
            return false;
        }
    }
    return true;
}

fn main() {    
    let mut lst: [u64; LST_SIZE] = [0; LST_SIZE];
    for i in 0..LST_SIZE {
        lst[i] = i as u64;
    }

    let mut rng = rand::thread_rng();

    for _i in 0..NR_RUNS {
        lst.shuffle(&mut rng);
        bubble_sort(&mut lst);
        assert!(is_sorted(lst), "sorting failed");
    }
}
