import pandas as pd

def tree_node(tree: pd.DataFrame) -> pd.DataFrame:
    parents = tree['p_id'].unique()

    conditions = [
        tree['p_id'].isna(),
        tree['id'].isin(parents)
    ]

    choices = ['Root', 'Inner']

    tree['type'] = np.select(conditions, choices, default = 'Leaf')
    return tree[['id', 'type']]