import pandas as pd

def find_products(products: pd.DataFrame) -> pd.DataFrame:
    idx = (products['low_fats']=='Y') & (products['recyclable']=='Y')
    filtered = products[idx]

    return filtered[['product_id']]