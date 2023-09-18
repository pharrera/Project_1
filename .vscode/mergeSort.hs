module MergeSort where

--divide list into two halves
firsthalf xs = take (length xs `div` 2) xs
secondhalf xs = drop (length xs `div` 2) xs

--merge two sorted lists
merge :: Ord a => [a] -> [a] -> [a]
merge xs [] = xs
merge [] ys = ys
merge (x:xs) (y:ys)  | x <= y    = x : merge xs (y:ys)
                     | otherwise = y : merge (x:xs) ys

mergesort :: Ord a => [a] -> [a]
mergesort [] = []
mergesort [x] = [x]
mergesort x = merge (mergesort (firsthalf x)) (mergesort (secondhalf x))

main :: IO ()
main = do
    let test1 = mergesort [9,0,4,8,2,1]
    let test2 = mergesort [11, 100, 32, 59, 20, 1]
    let test3 = mergesort [33, 55, 13, 87, 45, 2, 98]
    print test1
    print test2
    print test3
