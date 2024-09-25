doubleMe :: (Num a) => a -> a
doubleMe x = x + x

doubleUs :: (Num a) => a -> a -> a
doubleUs x y = doubleMe x + doubleMe y

doubleSmallNumber :: (Ord a, Num a) => a -> a
doubleSmallNumber x =
  if x > 100
    then x
    else x * 2

factorial :: (Integral t) => t -> t
factorial 0 = 1
factorial n = n * factorial (n - 1)

bmiTell :: (RealFloat a) => a -> a -> String
bmiTell weight height
  | bmi <= skinny = "You're underweight, you emo, you!"
  | bmi <= normal = "You're supposedly normal. Pffft, I bet you're ugly!"
  | bmi <= fat = "You're fat! Lose some weight, fatty!"
  | otherwise = "You're a whale, congratulations!"
  where
    bmi = weight / height ^ 2
    skinny = 18.5
    normal = 25.0
    fat = 30.0

calcSqs :: (Integral a) => [a] -> [a]
calcSqs xs = [sq | x <- xs, let sq = x * x, sq >= 5]

quickSort :: (Ord a) => [a] -> [a]
quickSort [] = []
quickSort (x : xs) =
  let smallerSorted = quickSort [s | s <- xs, s <= x]
      biggerSorted = quickSort [b | b <- xs, x < b]
   in smallerSorted ++ [x] ++ biggerSorted

chain :: Integral a => a -> [a]
chain 1 = [1]
chain n
  | even n = n : chain (div n 2)
  | odd n  = n : chain (n * 3 + 1)

countChain :: Int
countChain = length [n | n <- [1..100], length (chain n) > 15]

enum :: [Integer -> Integer]
enum = map (*) [1..]

map' :: [t -> a] -> [t] -> [a]
map' _ [] = []
map' [] _ = []
map' (p:ps) (x:xs) = p x : map' ps xs