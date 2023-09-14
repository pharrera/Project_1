
quickSort :: Ord a => [a] -> [a]  -- quick sort a list in Haskell
quickSort [] = []
quickSort (x:xs) = 
    let smallSorted = quickSort [a | a <- xs, a <= x]
        bigSorted = quickSort [a | a <- xs, a > x]
    in smallSorted ++ [x] ++ bigSorted

main :: IO()
main = do
    let sortedList = quickSort [5, 1, 9, 4, 6, 7]
    print sortedList