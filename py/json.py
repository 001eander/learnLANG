import ujson

with open("./py/content.json") as f:
    data = ujson.loads(f.readline())
    