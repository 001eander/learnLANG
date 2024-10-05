avg :: Fractional a => a -> a -> a
avg x y = (x + y) / 2

calc :: (Ord p, Fractional p) => (p -> p) -> p -> p -> p -> p
calc func dx left right = helper left
  where
    helper x
      | x' < right = dx * avg y y' + helper x'
      | otherwise = 0
      where
        x' = x + dx
        y = func x
        y' = func x' 

calcPi :: (Floating a, Ord a) => a -> a
calcPi dx = 4 * calc (\x -> sqrt (1 - x ^ 2)) dx 0 1

derivative :: Fractional a => (a -> a) -> a -> a -> a
derivative func dx = derivatived_func
  where
    derivatived_func x = (func (x + dx) - func x) / dx

newtonImprove :: Fractional t => (t -> t) -> t -> t -> t
newtonImprove func dx = nt_func
  where
    nt_func x = x - func x / derivative func dx x

findFixedPoint :: (Ord a, Num a) => (a -> a) -> a -> a -> a
findFixedPoint func init dx = helper init
  where
    helper x = if goodEnough x then x else helper (func x)
    goodEnough x = abs (func x - x) < dx

findZeroPoint :: (Ord a, Fractional a) => (a -> a) -> a -> a -> a
findZeroPoint func init dx = findFixedPoint (newtonImprove func dx) init dx