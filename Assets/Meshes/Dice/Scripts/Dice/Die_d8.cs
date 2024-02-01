using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Die_d8 : Die
{
    override protected Vector3 HitVector(int side)
    {
        switch (side)
        {
            case 1: return new Vector3(0F, 0.4F, 0.4F);
            case 2: return new Vector3(-0.4F, 0F, -0.4F);
            case 3: return new Vector3(-0.4F, 0F, 0.4F);
            case 4: return new Vector3(0F, 0.4F, -0.4F);
            case 5: return new Vector3(0F, -0.4F, 0.4F);
            case 6: return new Vector3(0.4F, 0F, -0.4F);
            case 7: return new Vector3(0.4F, 0F, 0.4F);
            case 8: return new Vector3(0F, -0.4F, -0.4F);
        }
        return Vector3.zero;
    }
    override protected float RotateTowards(int side)
    {
        switch (side)
        {
            case 1: return 0F;
            case 2: return 180F;
            case 3: return 0F;
            case 4: return 180F;
            case 5: return 0F;
            case 6: return 180F;
            case 7: return 0F;
            case 8: return 180F;
        }

        return -1;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Dice"))
        {
            Physics.IgnoreCollision(GetComponent<Collider>(), collision.gameObject.GetComponent<Collider>());
        }
    }

}
