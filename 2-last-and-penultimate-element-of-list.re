let rec last_two = 
fun
    | [] | [_] => None
    | [x, y] => Some((x, y)) /* return tuple */
    | [_, ...t] => last_two(t);