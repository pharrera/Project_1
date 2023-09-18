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
    let m_list = mergesort [9,0,4,8,2,1]
    print m_list
