let reverse = (list) => {
    let rec r = (r_list) => fun
        | [] => r_list
        | [head, ...t] => r((head, ...r_list), t);
    r([], list)
};