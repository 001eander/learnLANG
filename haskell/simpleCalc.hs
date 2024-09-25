avg :: Fractional a => a -> a -> a
avg x y = (x + y) / 2

calc :: Num a => (a -> a) -> a -> a -> a -> a
calc func dx left right
  | left > right = 0
  | otherwise    = dx * avg (y') (y) + calc func dx nxt right
  where
    nxt = left + dx
    y' = func nxt
    y = func left
