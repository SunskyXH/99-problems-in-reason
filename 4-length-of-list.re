let length = (list) => {
    let rec counter = (n) => fun
        | [] => n
        | [_, ...t] => counter(n+1, t);
    counter(0, list)
};