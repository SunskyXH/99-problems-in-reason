let rec kth = (k) => fun
    | [] => None
    | [h, ...t] => k == 1 ? Some(h) : kth(k - 1, t);

/* in fact we can use List.nth(arr, k) */